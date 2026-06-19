def ft_count_harvest_recursive_helper(day: int, days_until_harvest: int):
    if day > days_until_harvest:
        return
    print(f"Day {day}")
    ft_count_harvest_recursive_helper(day + 1, days_until_harvest)


def ft_count_harvest_recursive():
    days_until_harvest: int = int(input("Days until harvest: "))
    ft_count_harvest_recursive_helper(1, days_until_harvest)
    print("Harvest time!")
