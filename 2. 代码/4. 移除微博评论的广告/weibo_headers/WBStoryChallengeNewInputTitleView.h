//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "WBGrowingTextViewDelegate-Protocol.h"
#import "WBStoryChallengeTopicInputViewDelegate-Protocol.h"

@class NSString, UILabel, UITapGestureRecognizer, WBStoryChallengeTopicInputView;

@interface WBStoryChallengeNewInputTitleView : UIView <WBGrowingTextViewDelegate, WBStoryChallengeTopicInputViewDelegate>
{
    _Bool _checkPass;
    UILabel *_topPlaceholderLabel;
    WBStoryChallengeTopicInputView *_inputTextView;
    UIView *_lineView;
    UILabel *_tipLabel;
    UITapGestureRecognizer *_tap;
    CDUnknownBlockType _callback;
}

@property(copy, nonatomic) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(nonatomic) _Bool checkPass; // @synthesize checkPass=_checkPass;
@property(retain, nonatomic) UITapGestureRecognizer *tap; // @synthesize tap=_tap;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) WBStoryChallengeTopicInputView *inputTextView; // @synthesize inputTextView=_inputTextView;
@property(retain, nonatomic) UILabel *topPlaceholderLabel; // @synthesize topPlaceholderLabel=_topPlaceholderLabel;
- (void).cxx_destruct;
- (void)storyChallengeTopicInputViewDidEndEditing:(id)arg1;
- (void)storyChallengeTopicInputViewDidBeginEditing:(id)arg1;
- (void)storyChallengeTopicInputViewDidChange:(id)arg1 text:(id)arg2;
- (void)tapAction;
- (void)verifyInput:(id)arg1;
- (void)showTopPlacehol:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

