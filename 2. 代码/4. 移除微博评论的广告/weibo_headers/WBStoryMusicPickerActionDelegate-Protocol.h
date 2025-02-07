//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class WBStoryMusicItem;
@protocol WBStoryMusicPickerViewDelegate;

@protocol WBStoryMusicPickerActionDelegate <NSObject>
@property(nonatomic) double videoDuration;
@property(retain, nonatomic) WBStoryMusicItem *selectedMusicItem;
@property(retain, nonatomic) WBStoryMusicItem *playingItem;
@property(nonatomic) __weak id <WBStoryMusicPickerViewDelegate> delegate;
- (void)showContents:(double)arg1;
- (void)updateMusicItemState:(WBStoryMusicItem *)arg1;
- (void)fetchMusicList:(void (^)(NSArray *, NSError *))arg1;
@end

