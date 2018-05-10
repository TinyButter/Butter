//
//  node.h
//  Butter
//
//  Created by stephenwzl on 2018/5/10.
//  Copyright © 2018年 stephenw.cc. All rights reserved.
//

#ifndef node_h
#define node_h


typedef struct Point_ {
  float x;
  float y;
} Point;

typedef struct Size_ {
  float width;
  float height;
} Size;

typedef struct Frame_ {
  Point origin;
  Size size;
} Frame;

typedef struct View_ {
  Frame frame;
} View;

#endif /* node_h */
