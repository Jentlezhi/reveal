//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "XMPersonalCenterSectionView.h"

@class XMMCSliderView, XMPersonalCenterSectionFooterModel;

@interface XMPersonalCenterSectionFooter : XMPersonalCenterSectionView
{
    XMPersonalCenterSectionFooterModel *_model;
    XMMCSliderView *_sliderView;
}

@property(retain, nonatomic) XMMCSliderView *sliderView; // @synthesize sliderView=_sliderView;
@property(retain, nonatomic) XMPersonalCenterSectionFooterModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)openurl:(id)arg1;
- (void)addSliderView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

