//
//  ViewController.m
//  demo
//
//  Created by stephenwzl on 2018/5/10.
//  Copyright © 2018年 stephenw.cc. All rights reserved.
//

#import "ViewController.h"
#include "ev.h"

//ev_io stdin_watcher;
//ev_timer timeout_wather;

//static void timeout_cb (EV_P_ ev_timer *w, int revents) {
//  puts("timeout");
//  ev_break(EV_A_ EVBREAK_ONE);
//}

static void myw_cb (EV_P_ ev_watcher *w, int revents) {
  puts("my watcher");
}


@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
  [super viewDidLoad];
  struct ev_loop *loop = EV_DEFAULT;
  ev_watcher myWatch;
  ev_init(&myWatch, myw_cb);
//  ev_timer_init(&timeout_wather, timeout_cb, 5, 0);
//  ev_timer_start(loop, &timeout_wather);
  ev_run(loop, 0);
  
}


- (void)didReceiveMemoryWarning {
  [super didReceiveMemoryWarning];
  // Dispose of any resources that can be recreated.
}


@end
