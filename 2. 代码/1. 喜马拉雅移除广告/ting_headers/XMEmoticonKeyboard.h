//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIScrollViewDelegate-Protocol.h"
#import "XMEmoticonKeyboardScrollDelegate-Protocol.h"
#import "XMEmoticonTabViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, UIButton, UIScrollView, XMEmoticonTabView;
@protocol XMEmoticonKeyboardDelegate;

@interface XMEmoticonKeyboard : UIView <UIScrollViewDelegate, XMEmoticonTabViewDelegate, XMEmoticonKeyboardScrollDelegate>
{
    id <XMEmoticonKeyboardDelegate> _delegate;
    NSMutableArray *_keyboardArray;
    long long _currentPage;
    long long _pageWillSwitchTo;
    double _keyboardHeight;
    double _tabHeight;
    UIScrollView *_scrollView;
    XMEmoticonTabView *_tabView;
    UIButton *_sendButton;
    struct UIEdgeInsets _contentInsets;
}

+ (id)simpleKeyboard;
+ (id)keyboard;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) XMEmoticonTabView *tabView; // @synthesize tabView=_tabView;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(nonatomic) double tabHeight; // @synthesize tabHeight=_tabHeight;
@property(nonatomic) double keyboardHeight; // @synthesize keyboardHeight=_keyboardHeight;
@property(nonatomic) long long pageWillSwitchTo; // @synthesize pageWillSwitchTo=_pageWillSwitchTo;
@property(nonatomic) long long currentPage; // @synthesize currentPage=_currentPage;
@property(retain, nonatomic) NSMutableArray *keyboardArray; // @synthesize keyboardArray=_keyboardArray;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) __weak id <XMEmoticonKeyboardDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
@property(nonatomic) _Bool hideSendButton;
- (_Bool)shouldShowTabView;
- (void)didSwitchToPage:(long long)arg1 animated:(_Bool)arg2;
- (void)willSwitchToPage:(long long)arg1 animated:(_Bool)arg2;
- (void)addAllKnownKeyboard;
- (void)removeKeyboard:(id)arg1;
- (void)addKeyboard:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillBeginDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)emoticonTabView:(id)arg1 didSelectTabAtIndex:(long long)arg2;
- (id)emoticonTabView:(id)arg1 imageAtIndex:(long long)arg2;
- (long long)tabNumberOfEmoticonTabView:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setAllBackgroundColor:(id)arg1;
- (void)clickSendButton:(id)arg1;
@property(readonly, copy, nonatomic) NSArray *keyboards;
- (void)didInitialize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

