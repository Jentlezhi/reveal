//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UILabel, WBContentImageView;

@interface WBFilterGroupView : UIView
{
    UIButton *_filterButton;
    NSString *_filterButtonCode;
    UILabel *_titleLabel;
    WBContentImageView *_icon;
    UILabel *_iconLabel;
}

@property(retain, nonatomic) UILabel *iconLabel; // @synthesize iconLabel=_iconLabel;
@property(retain, nonatomic) WBContentImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) NSString *filterButtonCode; // @synthesize filterButtonCode=_filterButtonCode;
@property(retain, nonatomic) UIButton *filterButton; // @synthesize filterButton=_filterButton;
- (void).cxx_destruct;
- (void)setFilterGroupInfo:(id)arg1 index:(unsigned long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

