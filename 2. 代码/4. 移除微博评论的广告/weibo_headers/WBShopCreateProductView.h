//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CAGradientLayer, UILabel, UIViewController, WBShopCustomButton;

@interface WBShopCreateProductView : UIView
{
    UIViewController *_rootController;
    UILabel *_titleLabel;
    WBShopCustomButton *_createBtn;
    WBShopCustomButton *_historyBtn;
    CAGradientLayer *_gradientLayer;
}

@property(retain, nonatomic) CAGradientLayer *gradientLayer; // @synthesize gradientLayer=_gradientLayer;
@property(retain, nonatomic) WBShopCustomButton *historyBtn; // @synthesize historyBtn=_historyBtn;
@property(retain, nonatomic) WBShopCustomButton *createBtn; // @synthesize createBtn=_createBtn;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak UIViewController *rootController; // @synthesize rootController=_rootController;
- (void).cxx_destruct;
- (void)createClick;
- (void)historyClick;
- (id)initWithFrame:(struct CGRect)arg1;

@end

