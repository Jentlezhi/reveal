//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBTimelineProductAreaConfig : NSObject
{
    double _productsUpPadding;
    double _productCellPaddingHorizontal;
    double _productsHeight;
    double _detailProductsCellHeight;
    double _detailProductsCellPaddingVertical;
    double _detailProductTitlePaddingLeft;
    double _detailProductTitlePaddingUp;
    double _detailTitle2PricePadding;
    double _detailWishPadding;
    double _detailTitleFont;
    double _detailPriceFont;
}

@property double detailPriceFont; // @synthesize detailPriceFont=_detailPriceFont;
@property double detailTitleFont; // @synthesize detailTitleFont=_detailTitleFont;
@property double detailWishPadding; // @synthesize detailWishPadding=_detailWishPadding;
@property double detailTitle2PricePadding; // @synthesize detailTitle2PricePadding=_detailTitle2PricePadding;
@property double detailProductTitlePaddingUp; // @synthesize detailProductTitlePaddingUp=_detailProductTitlePaddingUp;
@property double detailProductTitlePaddingLeft; // @synthesize detailProductTitlePaddingLeft=_detailProductTitlePaddingLeft;
@property double detailProductsCellPaddingVertical; // @synthesize detailProductsCellPaddingVertical=_detailProductsCellPaddingVertical;
@property double detailProductsCellHeight; // @synthesize detailProductsCellHeight=_detailProductsCellHeight;
@property double productsHeight; // @synthesize productsHeight=_productsHeight;
@property double productCellPaddingHorizontal; // @synthesize productCellPaddingHorizontal=_productCellPaddingHorizontal;
@property double productsUpPadding; // @synthesize productsUpPadding=_productsUpPadding;
- (double)widthWithSize:(struct CGSize)arg1;
- (void)updateScreenWith:(struct CGSize)arg1;
- (id)initWithIPadScreen;
- (id)initWithIPhone6PlusScreen;
- (id)initWithIPhone6Screen;
- (id)initWithIPhone5Screen;

@end

