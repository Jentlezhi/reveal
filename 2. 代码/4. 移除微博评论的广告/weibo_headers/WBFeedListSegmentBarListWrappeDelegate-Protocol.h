//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSMutableArray, WBSegmentChannelsBarView;

@protocol WBFeedListSegmentBarListWrappeDelegate <NSObject>

@optional
- (void)wrapperDidUpdateChannels:(NSMutableArray *)arg1 unusedChannels:(NSMutableArray *)arg2;
- (void)wrapperDidClickSameChannelsBar:(WBSegmentChannelsBarView *)arg1;
- (void)wrapperWillClickSameChannelsBar:(WBSegmentChannelsBarView *)arg1;
- (void)wrapperDidSelectChannelsBar:(WBSegmentChannelsBarView *)arg1 toIndex:(long long)arg2;
- (void)wrapperWillSelectChannelsBar:(WBSegmentChannelsBarView *)arg1 toIndex:(long long)arg2;
@end

