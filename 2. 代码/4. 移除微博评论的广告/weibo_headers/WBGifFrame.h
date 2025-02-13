//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIImage;

@interface WBGifFrame : NSObject
{
    float _delayTime;
    UIImage *_image;
    unsigned long long _index;
    double _nextFrameTime;
}

+ (id)frameOfWBImage:(id)arg1 atIndex:(unsigned long long)arg2;
+ (id)frameWithImage:(id)arg1 index:(unsigned long long)arg2 delay:(float)arg3;
@property(nonatomic) double nextFrameTime; // @synthesize nextFrameTime=_nextFrameTime;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(nonatomic) float delayTime; // @synthesize delayTime=_delayTime;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
- (void).cxx_destruct;
- (id)initWithImage:(id)arg1 index:(unsigned long long)arg2 delay:(float)arg3;

@end

