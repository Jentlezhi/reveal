//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBTimelineAttributedTextView.h"

#import "WBVideoDanmakuViewProtocol-Protocol.h"

@class NSString, UIImageView, WBVideoDanmakuSegmentItem;

@interface WBVideoDanmakuAttributedTextView : WBTimelineAttributedTextView <WBVideoDanmakuViewProtocol>
{
    _Bool _isParseEmoticons;
    double _fontSize;
    NSString *_contentText;
    double _trackHeight;
    UIImageView *_displayImageView;
    WBVideoDanmakuSegmentItem *_item;
}

@property(retain, nonatomic) WBVideoDanmakuSegmentItem *item; // @synthesize item=_item;
@property(retain, nonatomic) UIImageView *displayImageView; // @synthesize displayImageView=_displayImageView;
@property(nonatomic) double trackHeight; // @synthesize trackHeight=_trackHeight;
@property(retain, nonatomic) NSString *contentText; // @synthesize contentText=_contentText;
@property(nonatomic) _Bool isParseEmoticons; // @synthesize isParseEmoticons=_isParseEmoticons;
@property(nonatomic) double fontSize; // @synthesize fontSize=_fontSize;
- (void).cxx_destruct;
- (void)setupEmoticonSizeWithFontSize:(double)arg1;
- (void)updateWithTime:(double)arg1 params:(id)arg2;
- (struct CGSize)contentAdaptiveSize;
- (void)configureWithParams:(id)arg1;
- (void)prepareForReuse;
- (void)configureAttributedTextWithParams:(id)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

