//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WBNoteProQADescView.h"

@class NSMutableAttributedString, UIButton, UILabel;

@interface WBNoteProQAAnswerDescView : WBNoteProQADescView
{
    NSMutableAttributedString *_attrString;
    CDUnknownBlockType _didClickRightButtonBlock;
    UILabel *_leftLabel;
    UIButton *_rightButton;
    UILabel *_answerLabel;
}

@property(retain, nonatomic) UILabel *answerLabel; // @synthesize answerLabel=_answerLabel;
@property(retain, nonatomic) UIButton *rightButton; // @synthesize rightButton=_rightButton;
@property(retain, nonatomic) UILabel *leftLabel; // @synthesize leftLabel=_leftLabel;
@property(copy, nonatomic) CDUnknownBlockType didClickRightButtonBlock; // @synthesize didClickRightButtonBlock=_didClickRightButtonBlock;
- (void).cxx_destruct;
- (void)dealloc;
- (void)didClickRightButton;
- (void)updateViewWithPrice:(id)arg1;
- (void)updateRightButtonWithTitle:(id)arg1;
- (void)updateLeftLabel:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

