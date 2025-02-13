//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, UIButton, UIImageView, UILabel;

@interface XMMinorNoticeView : UIView
{
    CDUnknownBlockType _cancelAction;
    CDUnknownBlockType _doneAction;
    UIView *_noticeView;
    UIImageView *_imageView;
    UILabel *_detailLabel;
    UIView *_line;
    UIButton *_cancelButton;
    UIButton *_doneButton;
    CAGradientLayer *_gradientLayer;
}

@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) UIButton *doneButton; // @synthesize doneButton=_doneButton;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *noticeView; // @synthesize noticeView=_noticeView;
@property(copy, nonatomic) CDUnknownBlockType doneAction; // @synthesize doneAction=_doneAction;
@property(copy, nonatomic) CDUnknownBlockType cancelAction; // @synthesize cancelAction=_cancelAction;
- (void).cxx_destruct;
- (void)show;
- (void)p_doneAction;
- (void)p_cancelAction;
- (void)traitCollectionDidChange:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

