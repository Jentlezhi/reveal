//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSArray, NSAttributedString, UIButton, UILabel;

@interface XMDubShowMSCartoonBackView : UIView
{
    CDUnknownBlockType _clickButton1;
    CDUnknownBlockType _clickButton2;
    CDUnknownBlockType _clickBk;
    UIView *_bkView;
    UILabel *_titleLabel;
    UIButton *_button1;
    UIButton *_button2;
    UIView *_line2;
    UIView *_convView;
    NSAttributedString *_titleAttr;
    NSArray *_buttonAttrs;
}

@property(retain, nonatomic) NSArray *buttonAttrs; // @synthesize buttonAttrs=_buttonAttrs;
@property(retain, nonatomic) NSAttributedString *titleAttr; // @synthesize titleAttr=_titleAttr;
@property(retain, nonatomic) UIView *convView; // @synthesize convView=_convView;
@property(retain, nonatomic) UIView *line2; // @synthesize line2=_line2;
@property(retain, nonatomic) UIButton *button2; // @synthesize button2=_button2;
@property(retain, nonatomic) UIButton *button1; // @synthesize button1=_button1;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIView *bkView; // @synthesize bkView=_bkView;
@property(copy, nonatomic) CDUnknownBlockType clickBk; // @synthesize clickBk=_clickBk;
@property(copy, nonatomic) CDUnknownBlockType clickButton2; // @synthesize clickButton2=_clickButton2;
@property(copy, nonatomic) CDUnknownBlockType clickButton1; // @synthesize clickButton1=_clickButton1;
- (void).cxx_destruct;
- (void)p_handleTapAction;
- (void)disMissWithComplete:(CDUnknownBlockType)arg1;
- (void)show;
- (void)p_handleButton2;
- (void)p_handleButton1;
- (void)customInit;
- (id)initWithSuperView:(id)arg1 attributeTitle:(id)arg2 buttons:(id)arg3;

@end

