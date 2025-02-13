//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class XMNvsPlayer;

@protocol XMNvsPlayerDelegate <NSObject>
- (void)playerDidSeek:(XMNvsPlayer *)arg1 position:(long long)arg2;
- (void)player:(XMNvsPlayer *)arg1 current:(long long)arg2;
- (void)playerDidStop:(XMNvsPlayer *)arg1 didEOF:(_Bool)arg2;

@optional
- (void)playerFailedExport:(XMNvsPlayer *)arg1;
- (void)playerCancleExport:(XMNvsPlayer *)arg1;
- (void)playerFinishExport:(XMNvsPlayer *)arg1;
- (void)playerExport:(XMNvsPlayer *)arg1 progress:(double)arg2;
- (void)playerStartExport:(XMNvsPlayer *)arg1;
@end

