//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WBNoteRewardAlertView;

@protocol WBNoteRewardAlertViewDelegate <NSObject>

@optional
- (void)rewardAlertView:(WBNoteRewardAlertView *)arg1 rewardMoney:(NSString *)arg2;
- (void)rewardAlertView:(WBNoteRewardAlertView *)arg1 selectedAnonymous:(_Bool)arg2;
- (void)rewardAlertViewDidComplete:(WBNoteRewardAlertView *)arg1;
- (void)rewardAlertViewDidCanceled:(WBNoteRewardAlertView *)arg1;
@end

