//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBSkinListManager : NSObject
{
    _Bool _isUpdatingSkinList;
}

+ (id)sharedManager;
@property(nonatomic) _Bool isUpdatingSkinList; // @synthesize isUpdatingSkinList=_isUpdatingSkinList;
- (void)_currentSkinDidChangeNotification:(id)arg1;
- (id)errorWithCode:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;
- (void)setCoverWithPid:(id)arg1 type:(int)arg2;
- (void)cancelUpdatingSkinList;
- (void)updateSkinListWithUICode:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)contentedSkinManager;

@end

