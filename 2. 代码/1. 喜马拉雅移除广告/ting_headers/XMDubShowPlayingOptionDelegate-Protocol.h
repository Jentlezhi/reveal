//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class XMDubAdItemInfo, XMDubShowPlayingOption, XMDubShowPlayingOptionRoleModel;

@protocol XMDubShowPlayingOptionDelegate <NSObject>

@optional
- (void)dubShowPlayingOptionPostStatistic:(XMDubShowPlayingOption *)arg1;
- (void)dubShowPlayingOptionPostCount:(XMDubShowPlayingOption *)arg1;
- (void)dubShowPlayingOptionOnCooperateActionOnOption:(XMDubShowPlayingOption *)arg1 role:(XMDubShowPlayingOptionRoleModel *)arg2;
- (void)dubShowPlayingOptionOnCloseAdView:(XMDubShowPlayingOption *)arg1;
- (void)dubShowPlayingOptionOnAdView:(XMDubShowPlayingOption *)arg1 adItem:(XMDubAdItemInfo *)arg2;
- (void)dubShowPlayingOptionOnLike:(XMDubShowPlayingOption *)arg1;
- (void)dubShowPlayingOptionOnMaterialView:(XMDubShowPlayingOption *)arg1;
- (void)dubShowPlayingOptionOnChallengeLabel:(XMDubShowPlayingOption *)arg1;
- (void)dubShowPlayingOptionOnHead:(XMDubShowPlayingOption *)arg1;
- (void)dubShowPlayingViewResetSuccessed:(XMDubShowPlayingOption *)arg1;
- (void)dubShowPlayingOptionOnBottomOption:(XMDubShowPlayingOption *)arg1 andType:(unsigned long long)arg2;
- (void)dubShowPlayingOptionOnDubAction:(XMDubShowPlayingOption *)arg1;
- (void)dubShowPlayingOptionOnFollow:(XMDubShowPlayingOption *)arg1;
- (void)dubShowPlayingOptionOnLandscape:(XMDubShowPlayingOption *)arg1;
- (void)dubShowPlayingOptionOnBack:(XMDubShowPlayingOption *)arg1;
- (void)dubShowPlayingOptionStopPreload:(XMDubShowPlayingOption *)arg1;
- (void)dubShowPlayingOptionStartPreloadNext:(XMDubShowPlayingOption *)arg1;
@end

