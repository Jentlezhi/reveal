//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, WBStatus, WBVideoPlaylistCollectionItem, WBVideoSocialPlayerTrendProvider;

@protocol WBVideoSocialPlayerTrendProviderDelegate <NSObject>
- (void)trendProvider:(WBVideoSocialPlayerTrendProvider *)arg1 didChangedActivateForActionSheet:(_Bool)arg2;
- (void)trendProvider:(WBVideoSocialPlayerTrendProvider *)arg1 didUpdatedTrendArray:(NSArray *)arg2;
- (void)trendProvider:(WBVideoSocialPlayerTrendProvider *)arg1 didSelectCollectionItem:(WBVideoPlaylistCollectionItem *)arg2 atIndex:(long long)arg3;
- (void)trendProvider:(WBVideoSocialPlayerTrendProvider *)arg1 didSelectStatus:(WBStatus *)arg2 atIndex:(long long)arg3;
- (void)trendProvider:(WBVideoSocialPlayerTrendProvider *)arg1 didChangedAutoPlaySetting:(_Bool)arg2;
@end

