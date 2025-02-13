//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIGestureRecognizer, UIImage, UITouch, UIView, WBShortVideoTransitionManager, WBViewController;
@protocol WBVideoPlaybackTransitionEndPoint;

@protocol WBShortVideoTransitionDelegate <NSObject>
- (void)videoPlaybackStateTransfered:(WBShortVideoTransitionManager *)arg1 from:(id <WBVideoPlaybackTransitionEndPoint>)arg2 end:(id <WBVideoPlaybackTransitionEndPoint>)arg3;
- (UIView *)sourceViewForTransition:(WBShortVideoTransitionManager *)arg1 isPresent:(_Bool)arg2;
- (void)transitionDidFinish:(WBShortVideoTransitionManager *)arg1 transitionCompleted:(_Bool)arg2;
- (void)transitionWillBegin:(WBShortVideoTransitionManager *)arg1 isPresent:(_Bool)arg2;
- (_Bool)dismissGestureshouldBeRequiredToFailByGestureRecognizer:(UIGestureRecognizer *)arg1;
- (_Bool)dismissGestureShouldBegin:(double)arg1 pullingDown:(_Bool)arg2;
- (_Bool)dismissGestureShouldReceiveTouch:(UITouch *)arg1;
- (WBViewController *)viewController;
- (UIImage *)dismissTransitionImage;
- (id)playerController;
@end

