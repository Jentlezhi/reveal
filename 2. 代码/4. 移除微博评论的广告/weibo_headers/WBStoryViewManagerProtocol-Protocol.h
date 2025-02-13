//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, WBStoryDraftModel, WBStoryMusicItem;
@protocol WBCameraProtocol, WBStoryViewManagerDelegate;

@protocol WBStoryViewManagerProtocol <NSObject>
@property(nonatomic) unsigned long long shootMode;
@property(nonatomic) _Bool needMusicCut;
@property(nonatomic) _Bool needsOpenMusicList;
@property(retain, nonatomic) NSString *defaultMusicID;
@property(nonatomic) unsigned long long cameraMode;
@property(retain, nonatomic) WBStoryMusicItem *defaultMusicItem;
@property(nonatomic) __weak id <WBStoryViewManagerDelegate> delegate;
@property(readonly, nonatomic) id <WBCameraProtocol> cameraManager;
- (void)resumeDraft:(WBStoryDraftModel *)arg1;
@end

