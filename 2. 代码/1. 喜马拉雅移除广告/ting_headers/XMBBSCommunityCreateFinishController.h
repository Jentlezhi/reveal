//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMBaseVC.h"

@class NSTimer, UILabel, XMBBSCommunity;

@interface XMBBSCommunityCreateFinishController : XMBaseVC
{
    UILabel *_timeLabel;
    long long _countdown;
    NSTimer *_timer;
    XMBBSCommunity *_community;
}

@property(retain, nonatomic) XMBBSCommunity *community; // @synthesize community=_community;
- (void).cxx_destruct;
- (void)onTimer;
- (void)stopPlayerTimer;
- (void)startTimer;
- (_Bool)shouldTriggerBackPan:(id)arg1;
- (void)onNext;
- (void)viewDidLoad;

@end

