//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView, WBFCLCommand, WBFwdCmtLikeView;

@protocol WBFwdCmtLikeViewDelegate <NSObject>
- (void)fwdCmtLikeView:(WBFwdCmtLikeView *)arg1 hotCommentCardDidClickedAtIndex:(long long)arg2;
- (void)fwdCmtLikeView:(WBFwdCmtLikeView *)arg1 actionView:(UIView *)arg2 didTriggerCommand:(WBFCLCommand *)arg3;
@end

