//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WBShimmering-Protocol.h"

@class NSString;

@interface WBShimmeringView : UIView <WBShimmering>
{
    UIView *_contentView;
}

+ (Class)layerClass;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
- (void).cxx_destruct;
@property(nonatomic) double shimmeringEndFadeDuration;
@property(nonatomic) double shimmeringBeginFadeDuration;
@property(readonly, nonatomic) double shimmeringFadeTime;
@property(nonatomic) long long shimmeringDirection;
@property(nonatomic, getter=shimmeringHighlightLength, setter=setShimmeringHighlightLength:) double shimmeringHighlightWidth;
@property(nonatomic) double shimmeringSpeed;
@property(nonatomic) double shimmeringOpacity;
@property(nonatomic) double shimmeringAnimationOpacity;
@property(nonatomic) double shimmeringPauseDuration;
@property(nonatomic, getter=isShimmering) _Bool shimmering;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic) double shimmeringHighlightLength;
@property(readonly) Class superclass;

@end

