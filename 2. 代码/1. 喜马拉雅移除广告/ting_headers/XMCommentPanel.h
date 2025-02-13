//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CDZTextViewDelegate-Protocol.h"

@class CDZTextView, NSArray, NSMutableArray, NSString, UIButton, UIColor, UILabel;
@protocol XMCommentPanelSource;

@interface XMCommentPanel : UIView <CDZTextViewDelegate>
{
    UIColor *_panelHolderViewBackgroundColor;
    NSMutableArray *_panelSourceArray;
    NSMutableArray *_panelButtonArray;
    _Bool _needsUpdatePanelView;
    _Bool _autoUpdateSendButtonEnable;
    _Bool _showPictureButtonAtTextViewRight;
    _Bool _contentHasChangedSinceLastLayoutSubviews;
    id _delegate;
    unsigned long long _minimumTextLength;
    id <XMCommentPanelSource> _selectedPanelSource;
    UIView *_currentPanelView;
    UIView *_customInputView;
    UIView *_titleView;
    UIView *_mediaView;
    UIView *_mediaHolderView;
    UIView *_contentView;
    CDZTextView *_textView;
    UIButton *_sendButton;
    UIView *_verticalSeparatorLine;
    UIButton *_addPictureButton;
    UIView *_panelHolderView;
    UILabel *_textLengthLabel;
    UIView *_separatorLine;
    double _textViewHeight;
    struct CGSize _lastLayoutSubviewsSize;
}

@property(nonatomic) double textViewHeight; // @synthesize textViewHeight=_textViewHeight;
@property(retain, nonatomic) UIView *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(retain, nonatomic) UILabel *textLengthLabel; // @synthesize textLengthLabel=_textLengthLabel;
@property(retain, nonatomic) UIView *panelHolderView; // @synthesize panelHolderView=_panelHolderView;
@property(retain, nonatomic) UIButton *addPictureButton; // @synthesize addPictureButton=_addPictureButton;
@property(retain, nonatomic) UIView *verticalSeparatorLine; // @synthesize verticalSeparatorLine=_verticalSeparatorLine;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) CDZTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIView *mediaHolderView; // @synthesize mediaHolderView=_mediaHolderView;
@property(retain, nonatomic) UIView *mediaView; // @synthesize mediaView=_mediaView;
@property(retain, nonatomic) UIView *titleView; // @synthesize titleView=_titleView;
@property(nonatomic) struct CGSize lastLayoutSubviewsSize; // @synthesize lastLayoutSubviewsSize=_lastLayoutSubviewsSize;
@property(nonatomic) _Bool contentHasChangedSinceLastLayoutSubviews; // @synthesize contentHasChangedSinceLastLayoutSubviews=_contentHasChangedSinceLastLayoutSubviews;
@property(retain, nonatomic) UIView *customInputView; // @synthesize customInputView=_customInputView;
@property(readonly, nonatomic) UIView *currentPanelView; // @synthesize currentPanelView=_currentPanelView;
@property(retain, nonatomic) id <XMCommentPanelSource> selectedPanelSource; // @synthesize selectedPanelSource=_selectedPanelSource;
@property(nonatomic) _Bool showPictureButtonAtTextViewRight; // @synthesize showPictureButtonAtTextViewRight=_showPictureButtonAtTextViewRight;
@property(nonatomic) _Bool autoUpdateSendButtonEnable; // @synthesize autoUpdateSendButtonEnable=_autoUpdateSendButtonEnable;
@property(nonatomic) unsigned long long minimumTextLength; // @synthesize minimumTextLength=_minimumTextLength;
@property(nonatomic) __weak id delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *panelButtonArray; // @synthesize panelButtonArray=_panelButtonArray;
@property(readonly, nonatomic) NSArray *panelSourceArray; // @synthesize panelSourceArray=_panelSourceArray;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (id)lineShapeLayer;
@property(nonatomic) unsigned long long maximumTextLength;
- (void)updateTextLengthLabelIfNedds;
- (void)updateSendButtonEnable;
- (void)inputContentDidChange;
- (void)layoutSubviewsWithSize:(struct CGSize)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)textViewDidHitMaximumTextLength:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (_Bool)isKeyboardShowing;
- (void)setCurrentPanelView:(id)arg1;
- (void)clickPanelButton:(id)arg1;
- (void)clickAddPictureButton:(id)arg1;
- (void)clickSendButton:(id)arg1;
- (void)updatePanelViewIfNeeded;
- (void)setNeedsUpdatePanelView;
- (id)panelButtonForSource:(id)arg1;
- (void)removeAllPanelSource;
- (void)removePanelSource:(id)arg1;
- (void)insertPanelSource:(id)arg1 atIndex:(long long)arg2;
- (void)addPanelSource:(id)arg1;
- (_Bool)resignFirstResponder;
- (_Bool)becomeFirstResponder;
- (void)didInitialize;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

