//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIScrollView.h>

#import "NvsIconGeneratorDelegate-Protocol.h"

@class NSArray, NSString, NvsIconGenerator, UIImage;

@interface NvsMultiThumbnailSequenceView : UIScrollView <NvsIconGeneratorDelegate>
{
    NvsIconGenerator *m_iconGenerator;
    double m_oldHeight;
    struct vector<__ThumbnailSequence *, std::__1::allocator<__ThumbnailSequence *>> m_thumbnailSequenceArray;
    struct map<double, __ThumbnailSequence *, std::__1::less<double>, std::__1::allocator<std::__1::pair<const double, __ThumbnailSequence *>>> m_thumbnailSequenceMap;
    _Bool m_geometryNeedUpdate;
    struct map<std::__1::pair<int, long long>, __Thumbnail *, std::__1::less<std::__1::pair<int, long long>>, std::__1::allocator<std::__1::pair<const std::__1::pair<int, long long>, __Thumbnail *>>> m_thumbnailMap;
    UIImage *m_placeholderBitmap;
    double m_maxThumbnailWidth;
    _Bool m_updatingThumbnail;
    int _thumbnailImageFillMode;
    NSArray *_descArray;
    double _thumbnailAspectRatio;
    double _pointsPerMicrosecond;
    double _startPadding;
    double _endPadding;
    long long _maxTimelinePosToScroll;
}

@property(nonatomic) long long maxTimelinePosToScroll; // @synthesize maxTimelinePosToScroll=_maxTimelinePosToScroll;
@property(nonatomic) int thumbnailImageFillMode; // @synthesize thumbnailImageFillMode=_thumbnailImageFillMode;
@property(nonatomic) double endPadding; // @synthesize endPadding=_endPadding;
@property(nonatomic) double startPadding; // @synthesize startPadding=_startPadding;
@property(nonatomic) double pointsPerMicrosecond; // @synthesize pointsPerMicrosecond=_pointsPerMicrosecond;
@property(nonatomic) double thumbnailAspectRatio; // @synthesize thumbnailAspectRatio=_thumbnailAspectRatio;
@property(retain, nonatomic) NSArray *descArray; // @synthesize descArray=_descArray;
- (id).cxx_construct;
- (void).cxx_destruct;
- (_Bool)setImage:(id)arg1 toThumbnail:(struct __Thumbnail *)arg2;
- (void)updateThumbnails;
- (void)updateThumbnailSequenceGeometry;
- (void)clearThumbnails;
- (void)clearThumbnailSequences;
- (void)cancelIconTask;
- (void)layoutSubviews;
- (void)scale:(double)arg1 withAnchor:(double)arg2;
- (double)mapXFromTimelinePos:(long long)arg1;
- (long long)mapTimelinePosFromX:(double)arg1;
- (void)didIconReady:(id)arg1 timestamp:(long long)arg2 taskId:(long long)arg3;
- (void)dealloc;
- (void)initInternal;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

