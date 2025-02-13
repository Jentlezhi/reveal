//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMMBaseView.h"

@class UILabel, XMCommunityRenewInfo, XMTimer;

@interface XMCommunityExperienceCountDownView : XMMBaseView
{
    XMTimer *_timer;
    double _passedTime;
    XMCommunityRenewInfo *_renewInfo;
    UILabel *_countDownLabel;
}

@property(retain, nonatomic) UILabel *countDownLabel; // @synthesize countDownLabel=_countDownLabel;
@property(retain, nonatomic) XMCommunityRenewInfo *renewInfo; // @synthesize renewInfo=_renewInfo;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)timerCall:(id)arg1;
- (void)stopTimer;
- (void)startTimerIfNeed;
- (void)dealloc;
- (void)didInitialize;

@end

