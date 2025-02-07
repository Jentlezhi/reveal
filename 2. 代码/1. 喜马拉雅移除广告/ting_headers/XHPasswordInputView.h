//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UITextFieldDelegate-Protocol.h"

@class NSString, UIButton, UITextField;

@interface XHPasswordInputView : UIView <UITextFieldDelegate>
{
    long long _maxCount;
    NSString *_textDefault;
    NSString *_placeholder;
    UITextField *_textField;
    UIView *_bgView;
    UIButton *_btnSend;
    double _keyboardAnimationDuration;
    CDUnknownBlockType _sendBlcok;
    CDUnknownBlockType _cancelBlock;
}

+ (id)show:(CDUnknownBlockType)arg1 cancelBlock:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property(copy, nonatomic) CDUnknownBlockType sendBlcok; // @synthesize sendBlcok=_sendBlcok;
@property(nonatomic) double keyboardAnimationDuration; // @synthesize keyboardAnimationDuration=_keyboardAnimationDuration;
@property(retain, nonatomic) UIButton *btnSend; // @synthesize btnSend=_btnSend;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(copy, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
@property(copy, nonatomic) NSString *textDefault; // @synthesize textDefault=_textDefault;
@property(nonatomic) long long maxCount; // @synthesize maxCount=_maxCount;
- (void).cxx_destruct;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)keyboardWillDisappear:(id)arg1;
- (void)keyboardWillAppear:(id)arg1;
- (void)sendButtonClick:(id)arg1;
- (void)bgViewClick;
- (void)hide;
- (void)show;
- (void)cancel;
- (void)initUI;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

