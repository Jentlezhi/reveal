//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UILabel;

@interface TBLiveItemIntroduceTipView : UIView
{
    UIImageView *_arrowImageView;
    UIView *_bodyView;
    UIView *_lineView;
    UILabel *_firstLabel;
    UILabel *_secondLabel;
}

@property(retain, nonatomic) UILabel *secondLabel; // @synthesize secondLabel=_secondLabel;
@property(retain, nonatomic) UILabel *firstLabel; // @synthesize firstLabel=_firstLabel;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) UIView *bodyView; // @synthesize bodyView=_bodyView;
@property(retain, nonatomic) UIImageView *arrowImageView; // @synthesize arrowImageView=_arrowImageView;
- (void).cxx_destruct;
- (id)createTextLabel;
- (id)initWithFrame:(struct CGRect)arg1;

@end

