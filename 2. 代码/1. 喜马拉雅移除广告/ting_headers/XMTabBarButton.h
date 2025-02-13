//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class NSArray, NSString, UIColor, UIImageView, UILabel;

@interface XMTabBarButton : UIControl
{
    NSString *_normalImageName;
    NSString *_selectedImageName;
    NSArray *_selectedAniImageNames;
    UIColor *_unselectedTextColor;
    UIColor *_selectedTextColor;
    NSString *_text;
    UIImageView *_iconImageView;
    UILabel *_textLabel;
}

@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel=_textLabel;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) UIColor *selectedTextColor; // @synthesize selectedTextColor=_selectedTextColor;
@property(retain, nonatomic) UIColor *unselectedTextColor; // @synthesize unselectedTextColor=_unselectedTextColor;
@property(retain, nonatomic) NSArray *selectedAniImageNames; // @synthesize selectedAniImageNames=_selectedAniImageNames;
@property(retain, nonatomic) NSString *selectedImageName; // @synthesize selectedImageName=_selectedImageName;
@property(retain, nonatomic) NSString *normalImageName; // @synthesize normalImageName=_normalImageName;
- (void).cxx_destruct;
- (void)traitCollectionDidChange:(id)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

