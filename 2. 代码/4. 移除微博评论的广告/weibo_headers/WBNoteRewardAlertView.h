//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSDictionary, NSString, UIButton, UIImageView, UILabel, WBContactAvatarView, WBNoteRewardAlertViewConfig, WBNoteRewardLoadingButton, WBNoteRewardTextField;
@protocol WBNoteRewardAlertViewDelegate;

@interface WBNoteRewardAlertView : UIControl <UITextFieldDelegate>
{
    _Bool _anonymous;
    id <WBNoteRewardAlertViewDelegate> _delegate;
    NSDictionary *_paraDic;
    NSString *_uicode;
    UIImageView *_bgImageView;
    UIButton *_cancelButton;
    WBContactAvatarView *_avatarView;
    UILabel *_descLabel;
    UIImageView *_moneyMark;
    UILabel *_moneyLabel;
    UIButton *_customButton;
    WBNoteRewardLoadingButton *_rewardButton;
    UIImageView *_inputImageView;
    WBNoteRewardTextField *_inputTextField;
    UILabel *_tipsLabel;
    NSString *_customMoney;
    WBNoteRewardAlertViewConfig *_config;
    long long _payType;
    long long _type;
    double _maxPrice;
    double _minPrice;
}

+ (id)instanceWithParaDic:(id)arg1;
@property(nonatomic) double minPrice; // @synthesize minPrice=_minPrice;
@property(nonatomic) double maxPrice; // @synthesize maxPrice=_maxPrice;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long payType; // @synthesize payType=_payType;
@property(retain, nonatomic) WBNoteRewardAlertViewConfig *config; // @synthesize config=_config;
@property(retain, nonatomic) NSString *customMoney; // @synthesize customMoney=_customMoney;
@property(nonatomic) _Bool anonymous; // @synthesize anonymous=_anonymous;
@property(retain, nonatomic) UILabel *tipsLabel; // @synthesize tipsLabel=_tipsLabel;
@property(retain, nonatomic) WBNoteRewardTextField *inputTextField; // @synthesize inputTextField=_inputTextField;
@property(retain, nonatomic) UIImageView *inputImageView; // @synthesize inputImageView=_inputImageView;
@property(retain, nonatomic) WBNoteRewardLoadingButton *rewardButton; // @synthesize rewardButton=_rewardButton;
@property(retain, nonatomic) UIButton *customButton; // @synthesize customButton=_customButton;
@property(retain, nonatomic) UILabel *moneyLabel; // @synthesize moneyLabel=_moneyLabel;
@property(retain, nonatomic) UIImageView *moneyMark; // @synthesize moneyMark=_moneyMark;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) WBContactAvatarView *avatarView; // @synthesize avatarView=_avatarView;
@property(retain, nonatomic) UIButton *cancelButton; // @synthesize cancelButton=_cancelButton;
@property(retain, nonatomic) UIImageView *bgImageView; // @synthesize bgImageView=_bgImageView;
@property(retain, nonatomic) NSString *uicode; // @synthesize uicode=_uicode;
@property(retain, nonatomic) NSDictionary *paraDic; // @synthesize paraDic=_paraDic;
@property(nonatomic) __weak id <WBNoteRewardAlertViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)buttonClicked:(id)arg1;
- (void)showInputItems:(_Bool)arg1;
- (unsigned long long)verifiedType:(id)arg1;
- (void)updateMoneyLabel:(id)arg1;
- (void)setupSubviews;
- (void)initSubviews;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)checkInputValue:(id)arg1;
- (void)configNoti;
- (void)dealloc;
- (void)setLoading:(_Bool)arg1;
- (void)didClickBackground;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

