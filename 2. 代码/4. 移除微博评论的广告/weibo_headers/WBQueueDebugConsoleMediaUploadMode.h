//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBVideoDebugConsoleMode.h"

@class NSArray;

@interface WBQueueDebugConsoleMediaUploadMode : WBVideoDebugConsoleMode
{
    _Bool _needsReloadRootItems;
    NSArray *_rootItems;
}

@property(retain, nonatomic) NSArray *rootItems; // @synthesize rootItems=_rootItems;
- (void).cxx_destruct;
- (void)clear;
- (void)itemStateUpdateNotification:(id)arg1;
- (void)itemListUpdateNotification:(id)arg1;
- (void)reloadRootItems;
- (void)setNeedsReloadRootItems;
- (id)allLogItems;
- (id)modeName;
- (id)init;

@end

