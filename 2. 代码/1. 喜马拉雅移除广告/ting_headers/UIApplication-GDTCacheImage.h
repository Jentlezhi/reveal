//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIApplication.h>

@class NSMutableDictionary;

@interface UIApplication (GDTCacheImage)
- (void)gdt_cacheData:(id)arg1 forRequest:(id)arg2;
- (void)gdt_cacheImage:(id)arg1 forRequest:(id)arg2;
- (void)gdt_cacheFailRequest:(id)arg1;
- (unsigned long long)gdt_failTimesForRequest:(id)arg1;
- (id)gdt_cacheDataForRequest:(id)arg1;
- (id)gdt_cacheImageForRequest:(id)arg1;
- (void)gdt_clearDiskCaches;
- (void)gdt_clearCache;
- (void)setGdt_cacheFaileTimes:(id)arg1;
@property(readonly, nonatomic) NSMutableDictionary *gdt_cacheFaileTimes;
@end

