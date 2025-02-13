//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface XMMVideoTaskDiary : NSObject
{
    _Bool _needStore;
    NSString *_lastPerformVersion;
    NSString *_lastPerformTime;
    NSString *_lastTipTime;
}

+ (id)lastDiary;
@property(readonly, nonatomic) NSString *lastTipTime; // @synthesize lastTipTime=_lastTipTime;
@property(readonly, nonatomic) NSString *lastPerformTime; // @synthesize lastPerformTime=_lastPerformTime;
@property(readonly, nonatomic) NSString *lastPerformVersion; // @synthesize lastPerformVersion=_lastPerformVersion;
- (void).cxx_destruct;
- (void)tipAndStore:(_Bool)arg1;
- (void)toNowAndStore:(_Bool)arg1;
@property(readonly, nonatomic) _Bool needTip;
@property(readonly, nonatomic) _Bool canPerform;
@property(readonly, nonatomic) _Bool isFirstPerform;
- (void)store;

@end

