//
//  loop.h
//  Butter
//
//  Created by stephenwzl on 2018/5/10.
//  Copyright © 2018年 stephenw.cc. All rights reserved.
//

#ifndef loop_h
#define loop_h

typedef void * butter_loop;

extern butter_loop default_butter_loop;
butter_loop butter_main_loop(void);

#endif /* loop_h */
