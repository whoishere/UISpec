//
//  UIQueryTableViewCell.h
//  UISpec
//
//  Created by Brian Knorr <btknorr@gmail.com>
//  Copyright(c) 2009 StarterStep, Inc., Some rights reserved.
//

#import "UIQuery.h"

@interface UIQueryPickerView : UIQuery {

}

-(UIQuery *)selectByIndex: (int)rowIndex;
-(UIQuery *)selectByText: (NSString*) iText;


@end
