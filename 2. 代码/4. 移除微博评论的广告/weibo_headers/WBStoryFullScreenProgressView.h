//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, UIColor;

@interface WBStoryFullScreenProgressView : UIView
{
    NSMutableArray *_cachedSegmentViews;
    NSMutableArray *_visibleSegmentViews;
    unsigned long long _numberOfSegments;
    UIColor *_foregroundColor;
    UIColor *_bgColor;
    double _height;
    struct UIEdgeInsets _contentInsets;
}

@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(retain, nonatomic) UIColor *foregroundColor; // @synthesize foregroundColor=_foregroundColor;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) unsigned long long numberOfSegments; // @synthesize numberOfSegments=_numberOfSegments;
- (void).cxx_destruct;
- (void)setProgress:(double)arg1 forSegmentAtIndex:(unsigned long long)arg2 animated:(_Bool)arg3;
- (void)setProgress:(double)arg1 forSegmentAtIndex:(unsigned long long)arg2;
- (void)layoutSubviews;
- (id)dequeueSegmentProgressView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

