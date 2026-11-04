"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1714."""

def spec_graphene_hardened_malloc_1714() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1714, "quarantine_slabs": 3, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1714():
    s = spec_graphene_hardened_malloc_1714()
    assert s["spec_id"] == 1714
