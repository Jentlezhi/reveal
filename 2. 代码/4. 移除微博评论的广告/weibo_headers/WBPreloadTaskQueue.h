//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSString;

@interface WBPreloadTaskQueue : NSObject
{
    NSMutableArray *_pool;
    NSString *_name;
}

@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (long long)taskCount;
- (void)clearAllTask;
- (id)allTask;
- (void)removeTaskAtIndex:(long long)arg1;
- (id)taskAtIndex:(long long)arg1;
- (void)removeTask:(id)arg1;
- (id)dequeueTask;
- (void)enqueueTask:(id)arg1;
- (id)init;
- (id)description;

@end

