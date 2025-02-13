//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableDictionary, UIButton, UILabel;
@protocol TBLiveErrorViewDelegate;

@interface TBLiveErrorView : UIView
{
    UILabel *_errorMsgLabel;
    UIButton *_actionBtn;
    UIButton *_otherActionBtn;
    UIView *_contentView;
    id <TBLiveErrorViewDelegate> _delegate;
    unsigned long long _currentContextType;
    NSMutableDictionary *_context;
}

@property(retain, nonatomic) NSMutableDictionary *context; // @synthesize context=_context;
@property(nonatomic) unsigned long long currentContextType; // @synthesize currentContextType=_currentContextType;
@property(nonatomic) __weak id <TBLiveErrorViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIButton *otherActionBtn; // @synthesize otherActionBtn=_otherActionBtn;
@property(retain, nonatomic) UIButton *actionBtn; // @synthesize actionBtn=_actionBtn;
@property(retain, nonatomic) UILabel *errorMsgLabel; // @synthesize errorMsgLabel=_errorMsgLabel;
- (void).cxx_destruct;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)otherActionBtnClicked;
- (void)actionBtnClicked;
- (void)layoutSubviewConstains:(_Bool)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

