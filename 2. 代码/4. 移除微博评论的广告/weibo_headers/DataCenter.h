//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface DataCenter : NSObject
{
}

+ (id)shareInstance;
- (id)JSONString:(id)arg1;
- (long long)isNextDayFrom:(double)arg1 zeroTime:(id)arg2;
- (void)clearCache;
- (id)videoPlayNetworkType;
- (id)currentNetworkType;
- (int)getRandomNumber:(int)arg1 to:(int)arg2;
- (id)combindParams;
- (_Bool)isAriticleRead:(id)arg1;
- (id)parseObj:(id)arg1 originClass:(id)arg2 targetClass:(Class)arg3;
- (id)parseObjArray:(id)arg1 originClass:(Class)arg2 targetClass:(Class)arg3;
- (id)parseStringValue:(id)arg1;
- (_Bool)isStringNull:(id)arg1;

@end

