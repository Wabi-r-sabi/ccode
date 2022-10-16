

/**
 * @descriptions: MethodExercise01
 * @author: 一只强
 * @date: 2022/10/14 16:35
 * @version: 1.0
 */
public class MethodExercise01 {
    public static void main(String[] args) {
//        Test04 test = new Test04();
//        double[] arr = {2.2, 10.7, -3.67, 8.5};
//        Double res = test.max(arr);
//        if (res != null) {
//            System.out.println("arr的最大值为" + test.max(arr));
//        } else {
//            System.out.println("arr的输入有误,数组的长度不能为null或者{}");
//        }

//        Test05 test = new Test05();
//        String[] strs = {"bob", "coc", "aoa", "dod"};
//        int index = test.find("aoa", strs);
//        if (index != -1) {
//            System.out.println("找到了,下标为" + index);
//        }else{
//            System.out.println("没有找到");
//        }

//        Book book = new Book("head first java", 208);
//        book.info();
//        book.updatePrice();//更新
//        book.info();

//        Test06 test = new Test06();
//        int[] oldArr = {1, 3, 5, 7, 9};
//        int[] newArr = test.copyArr(oldArr);
//        for (int j : newArr) {
//            System.out.print(j + " ");
//        }

//        Cal test = new Cal();
//        Double res = test.cal(2, 0);
//        if (res != null) {
//            System.out.println("num1/num2=" + String.format("%.2f", res));
//        }


    }
}
/*
class Test04 {
    public Double max(double[] arr) {
        //先判断arr不为空,在判断arr的长度大于1
        if (arr != null && arr.length > 0) {
            //保证arr至少有一个元素
            double max = arr[0];//假定第一个元素为最大值
            for (double v : arr) {
                if (v > max) {
                    max = v;
                }
            }
            return max;
        } else {
            return null;
        }
    }
}
*/
/*
class Test05 {
    public int find(String findStr, String[] strs) {
        //直接遍历字符串数组,如果找到,则返回索引
        for (int i = 0; i < strs.length; i++) {
            if (findStr.equals(strs[i])) {
                return i;
            }
        }
        //如果没有就返回-1
        return -1;
    }
}
*/

/*
class Book {
    String name;
    double price;

    public Book(String name, double price) {
        this.name = name;
        this.price = price;
    }

    public void updatePrice() {
        //如果方法中,没有price局部变量,this.price等价于price
        if (this.price > 150) {
            price = 150;
        } else if (this.price > 100) {
            price = 100;
        }
    }

    //显示书籍情况

    public void info() {
        System.out.println("书名=" + this.name + "价格=" + this.price);
    }
}
 */
/*
class Test06 {
    public int[] copyArr(int[] oldArr) {
        return Arrays.copyOf(oldArr, oldArr.length);
    }
}
 */
/*
class Cal {
    public Double cal(double num1, double num2) {
        if (num2 == 0) {
            System.out.println("num2不能为0");
            return null;
        } else {
            return num1 / num2;
        }
    }
}
 */

/*
class Employee {
    String name;
    char gender;
    int age;
    String job;
    double sal;
    //要求复用构造器
    //工作,工资

    public Employee(String job, double sal) {
        this.job = job;
        this.sal = sal;
    }
    //名字,性别,年龄

    public Employee(String name, char gender, int age) {
        this.gender = gender;
        this.name = name;
        this.age = age;
    }
    //名字,性别,年龄,工作,工资

    public Employee(String job, double sal, String name, char gender, int age) {
        this(name, gender, age);
        this.job = job;
        this.sal = sal;
    }
}
 */
