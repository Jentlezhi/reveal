//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class UIView, UIViewController, WBVideoSegmentSwipeViewController;

@protocol WBVideoSegmentSwipeViewDelegate <NSObject>

@optional
@property(nonatomic) _Bool isShowing;
- (UIView *)rightItemsViewForVideoSegmentSwipeViewController:(WBVideoSegmentSwipeViewController *)arg1;
- (void)videoSegmentSwipeViewController:(WBVideoSegmentSwipeViewController *)arg1 didClickedBackInViewController:(UIViewController *)arg2;
- (void)videoSegmentSwipeViewController:(WBVideoSegmentSwipeViewController *)arg1 didDismissAnimated:(_Bool)arg2;
- (void)videoSegmentSwipeViewController:(WBVideoSegmentSwipeViewController *)arg1 willDismissAnimated:(_Bool)arg2;
@end

