//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CDZView.h"

@class UIButton, UIView;

@interface XMWeKeLessonDetailBottom : CDZView
{
    _Bool _showPrice;
    _Bool _isLimitDiscout;
    _Bool _hasAudition;
    _Bool _hasDiscount;
    _Bool _isSeriesLesson;
    id _delegate;
    long long _auditionLessonId;
    UIButton *_entryButton;
    UIButton *_buyButton;
    UIButton *_auditionButton;
    UIView *_auditionLine;
    UIButton *_shareBtn;
    UIView *_shareLine;
    UIButton *_priceBtn;
}

@property(nonatomic) _Bool isSeriesLesson; // @synthesize isSeriesLesson=_isSeriesLesson;
@property(nonatomic) _Bool hasDiscount; // @synthesize hasDiscount=_hasDiscount;
@property(nonatomic) _Bool hasAudition; // @synthesize hasAudition=_hasAudition;
@property(retain, nonatomic) UIButton *priceBtn; // @synthesize priceBtn=_priceBtn;
@property(retain, nonatomic) UIView *shareLine; // @synthesize shareLine=_shareLine;
@property(retain, nonatomic) UIButton *shareBtn; // @synthesize shareBtn=_shareBtn;
@property(retain, nonatomic) UIView *auditionLine; // @synthesize auditionLine=_auditionLine;
@property(retain, nonatomic) UIButton *auditionButton; // @synthesize auditionButton=_auditionButton;
@property(retain, nonatomic) UIButton *buyButton; // @synthesize buyButton=_buyButton;
@property(retain, nonatomic) UIButton *entryButton; // @synthesize entryButton=_entryButton;
@property(nonatomic) _Bool isLimitDiscout; // @synthesize isLimitDiscout=_isLimitDiscout;
@property(nonatomic) _Bool showPrice; // @synthesize showPrice=_showPrice;
@property(nonatomic) long long auditionLessonId; // @synthesize auditionLessonId=_auditionLessonId;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)clickShareButton:(id)arg1;
- (void)clickAuditionButton:(id)arg1;
- (void)clickEntryButton:(id)arg1;
- (void)clickBuyButton:(id)arg1;
- (id)getPriceImage;
- (void)layoutSubviews;
- (void)setPaidInfo:(id)arg1 auditionLessonId:(unsigned long long)arg2 isSeriesLesson:(_Bool)arg3;
- (void)didInitialize;

@end

