//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImageView.h>

@class GDTImageDownloader;

@interface UIImageView (GDTCache)
+ (_Bool)gdt_isGIFWithData:(id)arg1;
+ (float)gdt_frameDurationAtIndex:(unsigned long long)arg1 source:(struct CGImageSource *)arg2;
+ (id)gdt_animatedGIFWithData:(id)arg1;
- (void)cancelRequest;
- (void)setImage:(id)arg1 isFromCache:(_Bool)arg2;
- (void)downloadWithReqeustX:(id)arg1 holder:(id)arg2;
- (void)gdt_setImageWithURLString:(id)arg1 placeholder:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)gdt_setImageWithURLString:(id)arg1 placeholderImageName:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)gdt_setImageWithURLString:(id)arg1 placeholder:(id)arg2;
- (void)gdt_setImageWithURLString:(id)arg1 placeholderImageName:(id)arg2;
@property(nonatomic) unsigned long long attemptToReloadTimesForFailedURL;
@property(retain, nonatomic) GDTImageDownloader *imageDownloader;
@property(copy, nonatomic) CDUnknownBlockType completion;
@end

