//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WBStoryItemSegment;
@protocol WBSTVSFooterDelegate;

@protocol WBSTVSFooterContainerProtocol <NSObject>

@optional
- (void)updateFollowState:(_Bool)arg1;
- (void)doSuccessFollowAnimation;
- (void)tapAdCardButton;
- (void)setVisible:(_Bool)arg1;
- (void)highLightBtn;
- (_Bool)shouldHighLightBtn;
- (double)maxHeight;
- (void)updateViewersButton;
- (void)updateCommentListButton;
- (void)updateLikeButton;
- (void)doLikeAnimation:(_Bool)arg1;
- (void)configWithSegment:(WBStoryItemSegment *)arg1 delegate:(id <WBSTVSFooterDelegate>)arg2;
@end

