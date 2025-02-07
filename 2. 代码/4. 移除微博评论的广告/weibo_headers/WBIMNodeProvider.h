//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;
@protocol OS_dispatch_semaphore;

@interface WBIMNodeProvider : NSObject
{
    NSObject<OS_dispatch_semaphore> *_semaphore;
    NSArray *_nodes;
    long long _currentIndex;
    NSMutableDictionary *_errorDict;
}

@property(retain, nonatomic) NSMutableDictionary *errorDict; // @synthesize errorDict=_errorDict;
@property(nonatomic) long long currentIndex; // @synthesize currentIndex=_currentIndex;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *nodes; // @synthesize nodes=_nodes;
- (void)_clear;
- (id)errorCount;
- (void)markFailure:(id)arg1;
- (id)currentNode;
- (id)init;

@end

