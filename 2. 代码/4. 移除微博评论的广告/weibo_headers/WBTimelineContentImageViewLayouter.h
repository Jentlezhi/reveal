//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "WBTimelineContentViewLayouter-Protocol.h"

@class NSMutableDictionary, NSString;

@interface WBTimelineContentImageViewLayouter : NSObject <WBTimelineContentViewLayouter>
{
    _Bool _needRelayout;
    double _constraintWidth;
    double _horizonSpacing;
    double _verticalSpacing;
    NSMutableDictionary *_imageRowLayouters;
    unsigned long long _imageCount;
    struct UIEdgeInsets _layoutContentInsets;
    struct CGRect _layoutFrame;
}

@property(nonatomic) struct CGRect layoutFrame; // @synthesize layoutFrame=_layoutFrame;
@property(nonatomic) _Bool needRelayout; // @synthesize needRelayout=_needRelayout;
@property(nonatomic) unsigned long long imageCount; // @synthesize imageCount=_imageCount;
@property(retain, nonatomic) NSMutableDictionary *imageRowLayouters; // @synthesize imageRowLayouters=_imageRowLayouters;
@property(nonatomic) struct UIEdgeInsets layoutContentInsets; // @synthesize layoutContentInsets=_layoutContentInsets;
@property(nonatomic) double verticalSpacing; // @synthesize verticalSpacing=_verticalSpacing;
@property(nonatomic) double horizonSpacing; // @synthesize horizonSpacing=_horizonSpacing;
@property(nonatomic) double constraintWidth; // @synthesize constraintWidth=_constraintWidth;
- (void).cxx_destruct;
- (struct CGRect)_convertLayouterRect:(struct CGRect)arg1 fromLayouterColumn:(unsigned long long)arg2;
- (struct CGRect)contentView:(id)arg1 imageFrameForRow:(unsigned long long)arg2 column:(unsigned long long)arg3;
- (unsigned long long)contentView:(id)arg1 numberOfColumnsInRow:(unsigned long long)arg2;
- (unsigned long long)numberOfGridImagesRowsIn:(id)arg1;
- (void)_resetLayouterWithImageCount:(unsigned long long)arg1;
- (void)_layoutIfNeeded;
- (void)beginLayoutWithImageCount:(unsigned long long)arg1 block:(CDUnknownBlockType)arg2;
- (struct CGSize)sizeOfImageViewWithImages:(id)arg1 withImageViewClass:(Class)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

