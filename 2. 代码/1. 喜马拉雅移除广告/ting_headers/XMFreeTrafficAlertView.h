//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSString;

@interface XMFreeTrafficAlertView : UIView
{
    UIView *_contentView;
    _Bool _isUserAction;
    long long _style;
    NSString *_msg;
    CDUnknownBlockType _closeCallback;
    CDUnknownBlockType _allowThisTimeCallback;
    CDUnknownBlockType _allowAllCallback;
    NSString *_title;
    NSArray *_btnTitles;
}

+ (_Bool)checkIfNeedShow;
@property(retain, nonatomic) NSArray *btnTitles; // @synthesize btnTitles=_btnTitles;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) _Bool isUserAction; // @synthesize isUserAction=_isUserAction;
@property(copy, nonatomic) CDUnknownBlockType allowAllCallback; // @synthesize allowAllCallback=_allowAllCallback;
@property(copy, nonatomic) CDUnknownBlockType allowThisTimeCallback; // @synthesize allowThisTimeCallback=_allowThisTimeCallback;
@property(copy, nonatomic) CDUnknownBlockType closeCallback; // @synthesize closeCallback=_closeCallback;
@property(retain, nonatomic) NSString *msg; // @synthesize msg=_msg;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)onClose;
- (void)clickAt:(id)arg1;
- (void)hide:(_Bool)arg1;
- (void)show;
- (void)customInit;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 buttonTitles:(id)arg4;
- (id)initWithStyle:(long long)arg1 message:(id)arg2 isSetStyle:(_Bool)arg3;
- (id)initWithStyle:(long long)arg1 message:(id)arg2;
- (id)initWithMsg:(id)arg1;
- (void)dealloc;

@end

