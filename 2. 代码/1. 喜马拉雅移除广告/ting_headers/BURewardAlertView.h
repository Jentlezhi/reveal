//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UILabel;

@interface BURewardAlertView : UIView
{
    CDUnknownBlockType _confirm;
    CDUnknownBlockType _cancel;
    UIView *_containerView;
    UILabel *_titleLable;
    UIButton *_confirmBtn;
    UIButton *_cancelBtn;
}

@property(retain, nonatomic) UIButton *cancelBtn; // @synthesize cancelBtn=_cancelBtn;
@property(retain, nonatomic) UIButton *confirmBtn; // @synthesize confirmBtn=_confirmBtn;
@property(retain, nonatomic) UILabel *titleLable; // @synthesize titleLable=_titleLable;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(copy, nonatomic) CDUnknownBlockType cancel; // @synthesize cancel=_cancel;
@property(copy, nonatomic) CDUnknownBlockType confirm; // @synthesize confirm=_confirm;
- (void).cxx_destruct;
- (void)updateTextOfTitleLabelByKey:(id)arg1;
- (void)updateTextOfCancelButtonByKey:(id)arg1;
- (void)dealloc;
- (void)disappear;
- (void)showInView:(id)arg1;
- (void)clickCancelBtn;
- (void)clickConfirmBtn;
- (void)creatSubViews;
- (id)initWithFrame:(struct CGRect)arg1 confirm:(CDUnknownBlockType)arg2 cancel:(CDUnknownBlockType)arg3;

@end

