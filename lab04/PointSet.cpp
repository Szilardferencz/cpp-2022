//
// Created by Szilárd on 10/12/2022.
//

#include "PointSet.h"

bool stat[M][M];

PointSet::PointSet(int n){
    points.reserve(n);
    distances.reserve(n*(n-1)/2);
    init();
    random_device rd;
    mt19937 mt(rd());
    uniform_real_distribution<double> dist(0, M);

    while(points.size() < n)
    {
        int x=(int)dist(mt);
        int y=(int)dist(mt);
        if (!stat[x][y])
        {
            points.emplace_back(x, y);
            stat[x][y]= true;
        }
    }
    computeDistances();
}
void init(){
    for(int i = 0; i < M; i++){
        for(int j = 0; j < M; j++){
            stat[i][j] = false;
        }
    }
}
int PointSet::numDistances() const {
    return n*(n-1)/2;
}


void PointSet::computeDistances() {
    for (int i=0;i<n-1;i++)
    {
        for (int j=i+1;j<n;j++)
        {
            distances.push_back(points[i].distanceTo(points[j]));
        }
    }
}

void PointSet::printDistances() const {
    int nr=numDistances();
    for (int i=0;i<nr;i++)
    {
        cout<<distances[i]<<" ";
    }
}

double PointSet::maxDistance() const {
    return *max_element(distances.begin(), distances.end());
}

double PointSet::minDistance() const {
    return *min_element(distances.begin(), distances.end());
}

void PointSet::sortDistances() {
    sort(distances.begin(), distances.end());
}

int PointSet::numDistinctDistances() {
    sortDistances();
    return unique(distances.begin(), distances.end()) - distances.begin();
}